#include<bits/stdc++.h.h>
using namespace std;
class TrieNode
{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    TrieNode(char ch)
    {
        data=ch;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        isTerminal=false;
    }
};
class Trie
{
    public:
    TrieNode* root;
    void insertUtil(TrieNode* root,string word)
    {
        if(word.length()==0)
        {//if word is completely traversed
            root->isTerminal=true;
        }
        int index=word[0]-'A';
        TrieNode* child;

        //present
        if(root->children !=NULL)
        {
            child=root->children[index];
        }
        //absent 
        else
        {
            child = new TrieNode(word[0]);
            root->children[index]=child;    
        }
        //RECURSION 
        insertUtil(child,word.substr(1));
    }
    void insertWord(string word)
    {
        insertUtil(root,word);
    }
    bool searchUtil(TrieNode* root,string word)
    {
        //base 
        if(word.length()==0)
        {
            return root->isTerminal;
        }
        int index=word[0]-'A';
        TrieNode* child;

        //present 
        if(root->children[index]!=NULL)
        {
            child=root->children[index];
        }
        else
        {
            //absent
            return false;
        }
        return searchUtil(child,word.substr(1)); 
    }
    bool seachWord(string word)
    {
        return searchUtil(root,word);
    }
    

};
int main()
{
    Trie *t = new Trie();
    t->insertWord("abcd");
    cout<<"Present or Not "<<t->seachWord("abcdw")<<endl;
    return 0;


}