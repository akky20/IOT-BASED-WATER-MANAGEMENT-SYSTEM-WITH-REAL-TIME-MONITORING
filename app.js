var http = require('http');
var fs = require('fs');
var index = fs.readFileSync( 'index.html');
// const socket = io.connect('http://localhost:3000');

const SerialPort = require("serialport");
const { ReadlineParser } = require("@serialport/parser-readline");


const parsers = SerialPort.parsers;
const parser = new ReadlineParser({ delimeter: "\r\n" });

const port = new SerialPort.SerialPort({
  path: "COM7",
  baudRate: 9600,
  dataBits: 8,
  parity: "none",
  stopBits: 1,
  flowControl: false,
});

port.pipe(parser);

var app = http.createServer(function(req, res) {
    res.writeHead(200, {'Content-Type': 'text/html'});
    res.end(index);
});

var io = require('socket.io')(app);

io.on('connection', function(socket) {
    console.log('Node is listening to port');
});

parser.on("data", (data) => {

  console.log(data);

  io.emit('data',data)
});

app.listen(3000);
