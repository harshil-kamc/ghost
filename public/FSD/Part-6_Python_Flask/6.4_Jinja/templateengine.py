from flask import Flask,render_template
app=Flask(__name__)
dict={"name":"John", "age":60,"job":"Manager","address":"Hyd", "salary":2000}
@app.route("/")
def result():
    return render_template("tabledict.html",result=dict)
if __name__=="__main__":
    app.run(debug=True,port=5001)