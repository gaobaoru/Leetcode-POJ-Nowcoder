

对于两个字符串A和B，如果A和B中出现的字符种类相同且每种字符出现的次数相同，则A和B互为变形词，请设计一个高效算法，检查两给定串是否互为变形词。

给定两个字符串A和B及他们的长度，请返回一个bool值，代表他们是否互为变形词。
测试样例：

"abc",3,"bca",3

返回：true

class Transform {
public:
    bool chkTransform(string A, int lena, string B, int lenb) {
        // write code here
        if(lena != lenb) return false;
        int hashTableA[256] = {0};
        int hashTableB[256] = {0};
        for(int i = 0; i < lena; i++){
            hashTableA[A[i]]++;
            hashTableB[B[i]]++;
        }
        for(int j = 0; j < 256; j++){
            if(hashTableA[j] != hashTableB[j])
                return false;
        }
        return true;
    }
};
