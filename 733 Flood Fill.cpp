class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor = image[sr][sc];
        if (newColor != oldColor) {
            dfs (image, sr, sc, newColor, oldColor);
        }
        return image;
    }
    
    void dfs (vector<vector<int>>& image, int sr, int sc, int &newColor, int &oldColor) {
        if (sr >= 0 && sr < image.size() && sc >= 0 && sc < image[0].size() && image[sr][sc] == oldColor) {
            image[sr][sc] = newColor;
            dfs (image, sr + 1, sc, newColor, oldColor);
            dfs (image, sr - 1, sc, newColor, oldColor);
            dfs (image, sr, sc + 1, newColor, oldColor);
            dfs (image, sr, sc - 1, newColor, oldColor);
        }
    }  
};