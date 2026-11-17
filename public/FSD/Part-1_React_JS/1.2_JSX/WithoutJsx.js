import React from "react";
function WithoutJsx()
{
    let k1=React.createElement("h1",null,"This is H1 tag executed without JSX")
    let k2=React.createElement("p",null,"This is Paragraph tag executed without JSX")
    let k3=React.createElement("div",{"align":"center"},k1,k2);
    return k3;
}
export default WithoutJsx;