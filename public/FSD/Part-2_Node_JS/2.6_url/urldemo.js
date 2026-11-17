const { URL } = require('url');
const str="https://user:abcd@www.example.com:4000/abc/xyz/sample.txt? value1=10&value2=20#demo"
const myUrl = new URL(str);
console.log("Hostname="+myUrl.hostname);
console.log("Portnumber="+myUrl.port);
console.log("Relative path="+myUrl.pathname);
console.log("Queryparams="+myUrl.search);
console.log("Hashed data="+myUrl.hash);
console.log("Username="+myUrl.username);
console.log("Password="+myUrl.password);
console.log("Protocol="+myUrl.protocol);