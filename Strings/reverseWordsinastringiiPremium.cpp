class Solution {
    public void reverseWords(char[] str) {
        // reverse the whole input 
        reverse(str, 0, str.length - 1);

        // reverse each individual word
        reverseEachWords(str);
    }

    void reverse(char[] str, int s, int t) {
        while (s < t) {
            char tmp = str[s];
            str[s] = str[t];
            str[t] = tmp;
            s++;
            t--;
        }
    }

    void reverseEachWords(char[] str) {
        int i = 0, j = 0; 
        int n = str.length;
        while (i < n && j < n) {
            while (i < n && str[i] == ' ') {
                i++;
            }
            j = i;
            while (j < n && str[j] != ' ') {
                j++;
            }
            reverse(str, i, j - 1);
            i = j;
        }
    }
}
//algo is to reverse the entire string first and then revrese the each word