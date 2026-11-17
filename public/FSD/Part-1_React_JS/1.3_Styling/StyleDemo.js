import "./Sample.css"
import styles from "./Rules.module.css"
function StyleDemo()
{
    return(
        <div>
            <h1 style={{color:"red",fontSize:"30px"}}>
                This is H1 tag with Inline Style
            </h1>
            <p>This is paragraph with external style</p>
            <h2 className={styles.rule1}>
                This is H2 tag with external Module style
            </h2>
        </div>
    );
}
export default StyleDemo;