
class Trie{
    public:
    Trie* letters[26];
    bool end;
    Trie()
    {
         memset(letters, 0, sizeof(letters)); 
        end=false;
    }
    
};


class WordDictionary {
public:
    Trie*dict;
    
    bool search1(Trie*ptr,string word)
    {
        for(int i=0;i<word.size();i++)
        {
             if(word[i]=='.')
             {
                 for(auto j:ptr->letters)
                 {
                     if(j&&search1(j,word.substr(i+1)))return true;
                 }
                 return false;
             }
            int idx=word[i]-'a';
            if(ptr->letters[idx]==NULL)return false;
            ptr=ptr->letters[idx];
        
        }
       
        return ptr->end;
    }
    
    WordDictionary() {
         dict=new Trie();
    }
    
    void addWord(string word) {
        Trie* ptr=dict;
        for(auto i:word)
        {
            if(ptr->letters[i-'a']==NULL)
            {
                ptr->letters[i-'a']=new Trie();
            }
            ptr=ptr->letters[i-'a'];
        }
        ptr->end=true;
    }
    
    bool search(string word) {
        return search1(dict,word);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */