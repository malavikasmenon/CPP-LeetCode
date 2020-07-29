//Square the elements in an array and return the results in a sorted array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector <int> squares;
        for(auto i = A.begin();i<A.end();i++){
            int n = (*i)*(*i);
            squares.push_back(n);
        }
    
        sort(squares.begin(),squares.end());
        return squares;
        
    }
};