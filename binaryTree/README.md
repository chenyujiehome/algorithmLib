# 二叉树
## 遍历
 树的遍历
```
void traverse(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    // 前序位置
    traverse(root->left);
    // 中序位置
    traverse(root->right);
    // 后序位置
}
```
 链表和数组的遍历
```

//迭代遍历数组
void traverse(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {

    }
}

//递归遍历数组
void traverse(vector<int>& arr, int i) {
    if (i == arr.size()) {
        return;
    }
    //前序位置
    traverse(arr, i + 1);
    //后序位置
}

//迭代遍历单链表
void traverse(ListNode* head) {
    for (ListNode* p = head; p != nullptr; p = p -> next) {

    }
}

//递归遍历单链表
void traverse(ListNode* head) {
    if (head == nullptr) {
        return;
    }
    //前序位置
    traverse(head -> next);
    //后序位置
}
```

![表遍历图片](https://github.com/chenyujiehome/algorithmLib/blob/main/binaryTree/traverseList.jpeg)
*表遍历图*