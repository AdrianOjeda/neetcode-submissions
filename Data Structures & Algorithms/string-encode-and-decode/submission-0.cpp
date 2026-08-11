class Solution {


public:

    string encode(vector<string>& strs) {
        
        string resultingString;
        vector<string> sizes;
        for(int i = 0; i< strs.size(); i++){
            sizes.push_back(to_string(strs[i].size()));
            resultingString += sizes[i]+"#"+strs[i];
        }
        
        cout<<resultingString<<endl;
       

        return resultingString;
    }

    vector<string> decode(string s) {

        vector<string> result;
        int i = 0;
        while(i< s.size()){
            int j = i;
            while(s[j]!= '#'){
                j++;
            }
            int size = stoi(s.substr(i, j-i));
            string str = s.substr(j+1, size);
            result.push_back(str);
            i = j + 1 + size;
        }


        return result;

    }
};
