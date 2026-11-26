class Solution {
public:
    vector<vector<int>> change(vector<vector<int>>& image , int sr , int sc, int original , int color){
        int m = image.size();
        int n = image[0].size();
        if (sr<0 || sr>=m || sc<0 || sc>=n || image[sr][sc]!=original){
            return image;
        }
        image[sr][sc] = color;
        change(image, sr-1 , sc , original , color);
        change(image, sr , sc-1 , original , color);
        change(image, sr+1 , sc , original , color);
        change(image, sr , sc+1 , original , color);
        return image ;
    };
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc]==color){
            return image;
        }
        int original = image[sr][sc];
        return change(image , sr, sc,original , color);
    }
};