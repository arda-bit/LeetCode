int numOccurence(char* s, char* m){
    int occurence = 0;
    for(int i = 0; i<strlen(s)-1; i++){
        if(s[i] == m[0] && s[i+1] == m[1]){
            occurence++;
        }
    }
    return occurence;
}

int romanToInt(char* s) {
    int ans = 0;
    int len = strlen(s);
    for( int i = 0; i<len; i++){
        if(s[i] == 'I'){
            ans++;
        }
        if(s[i] == 'V'){
            ans+=5;
        }
        if(s[i] == 'X'){
            ans+=10;
        }
        if(s[i] == 'L'){
            ans+=50;
        }
        if(s[i] == 'C'){
            ans+=100;
        }
        if(s[i] == 'D'){
            ans+=500;
        }
        if(s[i] == 'M'){
            ans+=1000;
        }
    }
    if(strstr(s, "IV") != NULL){
        ans -= 2 * numOccurence(s, "IV");
    }
    if(strstr(s, "IX") != NULL){
        ans -= 2 * numOccurence(s, "IX");
    }
    if(strstr(s, "XL") != NULL){
        ans -= 20 * numOccurence(s, "XL");
    }
    if(strstr(s, "XC") != NULL){
        ans -= 20 * numOccurence(s, "XC");
    }
    if(strstr(s, "CD") != NULL){
        ans -= 200 * numOccurence(s, "CD");
    }
    if(strstr(s, "CM") != NULL){
        ans -= 200 * numOccurence(s, "CM");
    }
    return ans;
}