/// WEEK 05-2.c
/// LeetCode-----709.To Lower Case
char* toLowerCase(char* s) {
    for(int i=0; s[i]!=0; i++){ // �r�ꪺ�j�� ������s[i]!=0�n�O�@�U
        char c = s[i]; //�h���@�|�A�S���Xc
        if(isupper(c)) c = tolower(c);
        s[i] = c; //�h���@�|�A�S��^s[i]
    }
    return s;
}
