def solution(id_pw, db):
    user_id, user_pw = id_pw
    for data in db:
        db_id, db_pw = data
        if db_id == user_id:
            if db_pw == user_pw:
                return "login"
            else:
                return "wrong pw"
    return "fail"