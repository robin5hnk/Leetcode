class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool result;

        if (flowerbed.size() == 1) {
            if (flowerbed[0] == 0 && n <= 1) {
                return true;
            } 
            else if (flowerbed[0] == 1 && n <= 0) {
                return true;
            } 
            else {
                return false;
            }
        }

        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            n--;
            flowerbed[0] = 1;
        }

        for (int i = 2; i < flowerbed.size() - 1; i++) {
            if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                n--;
                flowerbed[i] = 1;
            }
        }

        if (flowerbed[flowerbed.size() - 1] == 0 && flowerbed[flowerbed.size() - 2] == 0) {
            n--;
            flowerbed[flowerbed.size() - 1] = 1;
        }

        if (n <= 0) {
            return true;
        }

        return false;
    }
};
