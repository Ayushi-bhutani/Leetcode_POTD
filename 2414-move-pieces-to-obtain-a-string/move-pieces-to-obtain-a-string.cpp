class Solution {
public:
    void skipSpaces(string &s,int& n,int& pos){
                while(pos<n && s[pos] == '_'){
                            pos++;
                                    }
                                        }
                                        public:
                                            bool canChange(string start, string target) {
                                                    int n = start.size();
                                                            int first = 0;
                                                                    int second = 0;
                                                                            int prevIndex = -1;
                                                                                    while(first < n){
                                                                                                //skip all spaces
                                                                                                            skipSpaces(start,n,first);
                                                                                                                        skipSpaces(target,n,second);

                                                                                                                                    if(first == n && second == n) return true;

                                                                                                                                                if(start[first] != target[second]) return false;

                                                                                                                                                            if(start[first] == 'L' && (second <= prevIndex or second>first)){
                                                                                                                                                                            return false;
                                                                                                                                                                                        }else if(start[first] == 'R' && first > second){
                                                                                                                                                                                                        return false;
                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                //if every thing is right take previous index to second index
                                                                                                                                                                                                                                            prevIndex = second;
                                                                                                                                                                                                                                                        first++;
                                                                                                                                                                                                                                                                    second++;
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                    skipSpaces(start,n,first);
                                                                                                                                                                                                                                                                                            skipSpaces(target,n,second);

                                                                                                                                                                                                                                                                                                    return first == n && second == n;
                                                                                                                                                                                                                                                                                                        
    }
};