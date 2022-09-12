class Solution {
public:
    string capitalizeTitle(string title) {
        string ans,temp;
        //temp var stores the running string
        for(int i=0;i<title.size();i++)
        {
            if(title[i]==' ')
            {
                //one word is finished 
                string ss;
                //if size is <=2 then convert the word to lowercase
                if(temp.size()<=2)
                {
                    for(int j=0;j<temp.size();j++)
                    {
                        ss+=tolower(temp[j]);
                    }
                }
                else
                {
                    //capitalize the first letter and decapitalize the rest of the string
                    ss+=toupper(temp[0]);
                    for(int j=1;j<temp.size();j++)
                    {
                        ss+=tolower(temp[j]);
                    }
                }
                temp=""; //reset
                ans+=ss;
                ans+=' '; //reset
            }
            else
            {
                temp+=title[i];
            }
        }
         if(temp.size()<=2)
                {
                    for(int j=0;j<temp.size();j++)
                    {
                        ans+=tolower(temp[j]);
                    }
                }
                else
                {
                    //capitalize the first letter and decapitalize the rest of the string
                    ans+=toupper(temp[0]);
                    for(int j=1;j<temp.size();j++)
                    {
                        ans+=tolower(temp[j]);
                    }
                }
        return ans;
       
    }
};