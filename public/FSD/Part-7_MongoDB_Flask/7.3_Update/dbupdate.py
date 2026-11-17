from pymongo import MongoClient
import flask
app=flask.Flask(__name__)
q1={};q2={}
fkey=input("Enter non-id filter key:")
fvalue=input("Enter filter value:")
q1[fkey]=fvalue
key=input("Enter update key:")
value=input("Enter update value:")
q2[key]=value
@app.route("/")
def update():
    try:
        conn=MongoClient('localhost',27017)
        print("Connection success..."+str(conn))
        db=conn.test;coll=db.emp;
        result=coll.update_many(q1,{"$set":q2})
        return f"<h3>{result.modified_count} Records Updated..check in mongodb</h3>"
    except Exception as e:
        print("Error="+e)
    finally:
        conn.close()
app.run()