/// WEEK 05-2.c
/// LeetCode-----709.To Lower Case
char* toLowerCase(char* s) {
    for(int i=0; s[i]!=0; i++){ // 字串的迴圈 中間的s[i]!=0要記一下
        char c = s[i]; //多此一舉，又取出c
        if(isupper(c)) c = tolower(c);
        s[i] = c; //多此一舉，又塞回s[i]
    }
    return s;
}
