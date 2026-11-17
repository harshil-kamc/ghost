function List()
{
    let items=["CSE","CSIT","DS","IOT","AIML"]
    let temp=[]
    for(let k=0;k<items.length;k++)
        temp.push(<li>{items[k]}</li>)
    return(<>
    <h3>Displaying List using for loop</h3><br/>
    <ol>{temp}</ol>
    <hr/>
    <h3>Displaying List using map function</h3><br/>
    <ul>
    {
        items.map((value)=><li>{value}</li>)
    }
    </ul>
    </>)
}
export default List;