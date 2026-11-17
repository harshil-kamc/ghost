from pymongo import MongoClient
import flask
conn=MongoClient("localhost",27017)
app=flask.Flask(__name__)
db=conn.test;coll=db.emp;
r1=[{"_id":8908,"name":"shyam","salary":5000},
    {"_id":8909,"name":"ram","salary":6000},
    {"_id":8910,"name":"jayram","salary":7000}]
@app.route("/")
def insert():
    try:
        coll.insert_many(r1);
        s1=f" {len(r1)} Records inserted..check in mongodb."
        return flask.jsonify(message=s1)
    except Exception as e:
        return f"Error={e}"
    finally:
        conn.close()
app.run()