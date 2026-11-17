function Conditional(props)
{
    let k=props.value;
    if(k)
        return <h1>True Conditional tag executed</h1>
    else
        return <h1>False Conditional tag executed</h1>
}
export default Conditional;