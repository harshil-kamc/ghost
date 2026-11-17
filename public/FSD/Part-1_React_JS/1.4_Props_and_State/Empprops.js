function Empprops(props)
{
    return(
        <div>
            <h3>Employee details using props are:</h3>
            <hr/>
            <p>Name:{props.name}<br/>
            Eid:{props.eid}<br/>
            Salary:{props.salary}
            </p>
        </div>
    );
}
export default Empprops;