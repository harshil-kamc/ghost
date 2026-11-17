import { Component } from "react";
class Arithmetic extends Component
{
    constructor(props)
    {
        super(props);
        this.state={a:0,b:0,c:""}
    }
    changeA=(event)=>{this.setState({a:event.target.value})}
    changeB=(event)=>{this.setState({b:event.target.value})}
    add=()=>{
        let x=parseInt(this.state.a);
        let y=parseInt(this.state.b);
        this.setState({c:(x+y)})
    }
    sub=()=>{
        let x=parseInt(this.state.a);
        let y=parseInt(this.state.b);
        this.setState({c:(x-y)})
    }
    mul=()=>{
        let x=parseInt(this.state.a);
        let y=parseInt(this.state.b);
        this.setState({c:(x*y)})
    }
    div=()=>{
        let x=parseInt(this.state.a);
        let y=parseInt(this.state.b);
        this.setState({c:(x/y)})
    }
    render()
    {
    return(
    <div>
    <h4>Arithmetic Operations using React Events</h4><hr/>
    Enter first number:
    <input type="text" value={this.state.a} onChange={this.changeA}/>
    <br/>
    Enter second number:
    <input type="text" value={this.state.b} onChange={this.changeB}/>
    <br/>
    <button onClick={this.add}>Add</button>&nbsp;&nbsp;
    <button onClick={this.sub}>Subtract</button>&nbsp;&nbsp;
    <button onClick={this.mul}>Multiply</button>&nbsp;&nbsp;
    <button onClick={this.div}>Divide</button><br/>
    Result={this.state.c}
    </div>
    );
    }
    }
export default Arithmetic;