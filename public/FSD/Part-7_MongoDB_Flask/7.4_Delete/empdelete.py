from pymongo import MongoClient
import flask
app=flask.Flask(__name__)
key=input("Enter key:")
value=input("Enter value:")
@app.route("/")
def delete():
    try:
        conn=MongoClient('localhost',27017)
        print("MongoDB Connection success...")
        db=conn.test;coll=db.emp;
        result=coll.delete_many({key:value})
        return f"<h3>{result.deleted_count} Records Deleted..check in mongodb</h3>"
    except Exception as e:
        print("Error="+e)
    finally:
        conn.close()
app.run()