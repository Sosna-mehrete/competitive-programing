class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> list;
        int i=1;
      while(i<=n){
          if(i%3==0 && i%5==0)
            list.push_back("FizzBuzz");
      else if(i%3==0 && i%5!=0)
               list.push_back("Fizz");
              else if(i%5==0 && i%3!=0)
               list.push_back("Buzz");
          else list.push_back(to_string(i));
          i++;
      }
        
        for(string str:list)
        cout<<str<<",";
        return list;
      }
    };
