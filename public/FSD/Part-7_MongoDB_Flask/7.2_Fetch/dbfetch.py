from pymongo import MongoClient
import flask
app=flask.Flask(__name__)
conn=MongoClient("localhost",27017)
print("Mongodb connection success")
db=conn.test;coll=db.emp;
result=coll.find({})
print(result)
@app.route("/")
def fetch():
    return flask.jsonify([k for k in result])
if __name__=="__main__":
    app.run()