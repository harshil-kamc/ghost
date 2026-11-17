import { Component } from "react";
class Studentcomp extends Component
{
    constructor(props)
    {
        super(props);
        this.state={rno:123,name:"smith",marks:70,branch:"CSE-DS"}
    }
    change=()=>
    {
        this.setState({rno:345,name:"SMITH",marks:80,branch:"CSE-DS"})
    }
    render()
    {
        return(
            <div>
            <h3>Student Details using State</h3><hr/>
            <p>Roll number:{this.state.rno}<br/>
                Name:{this.state.name}<br/>
                Branch:{this.state.branch}<br/>
                Marks:{this.state.marks}<br/>
            </p>
            <button onClick={this.change}>Click to change</button>
            </div>
        );
    }
}
export default Studentcomp;