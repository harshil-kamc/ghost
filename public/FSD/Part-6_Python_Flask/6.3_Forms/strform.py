from flask import Flask,request
app=Flask(__name__)
@app.route("/",methods=['GET','POST'])
def rev():
    if request.method=='POST':
        n=request.form["nm"]
        print("post invoked")
        r=n[::-1]
        return f"<h3>Reverse of a given String {n}={r}</h3>"
    else:
        print("get invoked")
        return '''
        <h3>A Flask Example to Demonstrate GET,POST Methods</h3>
        <form method="POST">
        Enter a string to reverse:
        <input type="text" name="nm"><br><br>
        <input type="submit" value="Reverse">
        </form>
        '''
app.run()