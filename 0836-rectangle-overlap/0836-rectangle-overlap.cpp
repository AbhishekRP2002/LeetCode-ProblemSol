class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
       // int x1 =  rect1[0];
       //  int x2 = rect1[2];
       //  int y1 = rect1[1];
       //  int y2 = rect1[3];
       //  int x3 = rect2[0];
       //  int y3 = rect2[1];
       //  int x4 = rect2[2];
       //  int y4 = rect2[3];
       //  if(x2 >= x3 or y1 >= y4 or x4 >= x1 or y3 >= y2)
       //      return false;
       //  return true;
        int x1 = rec1[0], y1 = rec1[1], x2 = rec1[2], y2 = rec1[3];
	int x3 = rec2[0], y3 = rec2[1], x4 = rec2[2], y4 = rec2[3];
	return (x1 < x4 && x3 < x2 && y1 < y4 && y3 < y2);
    }
};