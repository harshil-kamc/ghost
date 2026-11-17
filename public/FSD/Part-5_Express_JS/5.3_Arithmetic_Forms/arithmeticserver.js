const express=require("express")
const file=require("fs")
let data=file.readFileSync("arithmetic.html","utf-8")
const app=express()
app.get("/",(req,res)=>
{
    res.send(data)
})
app.get("/arithmetic",(req,res)=>
{
    let a=parseInt(req.query.n1)
    let b=parseInt(req.query.n2)
    let op=req.query.op
    if(op=="add")
        res.send(`<h3>First number=${a}<br>Second number=${b}<br/>Addition=${a+b}</h3>`)
    else if(op=="sub")
        res.send(`<h3>First number=${a}<br>Second number=${b}<br/>Subtraction=${a-b}</h3>`)
    else if(op=="mul")
        res.send(`<h3>First number=${a}<br>Second number=${b}<br/>Product=${a*b}</h3>`)
    else
        res.send(`<h3>First number=${a}<br>Second number=${b}<br/>Division=${a/b}</h3>`)
})
app.listen(3000,()=>
{
    console.log("server started...")
})