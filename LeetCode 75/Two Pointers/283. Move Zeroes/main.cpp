class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for (vector<int>::iterator it = nums.begin(); it != nums.end() ; ) {
            // Vì sau khi xóa 1 phần tử kích thước vector sẽ thay đổi, nếu phần tử tại it bị xóa thì it sẽ 
            // trỏ qua phần tử sau mà ko cần it++, vì vậy chỉ cần it++ đối với trường hợp ko bị xóa (!= 0)
            if (*it == 0) {
                count++;
                nums.erase(it);
            }
            else {
                it++;
            }
        }

        for (int i = 0; i < count; i++) {
            nums.push_back(0);
        }
    }
};
