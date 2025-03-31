#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* previous_node;
} node_t;

typedef struct {
    node_t* last_node;
    int len;
} linked_list_t;

// 1. Create: tạo ra đối tượng linked list
//  - input: linked_list_t* - địa chỉ đối tượng linked_list được tạo
//  - output: void
void Create(linked_list_t* list) {
    list->last_node = NULL;
    list->len = 0;
}

//2. GetLen: lấy số lượng node trong linked lisst
//- input : linked_list_t * địa chỉ đối tượng linked_list cần GetLen
//- Output : int
int GetLen(linked_list_t* list) {
    return list->len;
}

//3. Add: thêm một node vào cuối linked_list
//- Input :
//    *linked_list_t * -địa chỉ đối tượng linked list.Cái mà chúng ta sẽ add node vào đó
//    * int - giá trị của node được add vào
//    - Output : void
//    - Gợi ý : sử dụng cấp phát động(malloc hoặc calloc) để tạo ra node, và gán previous_node lưu địa chỉ của node trước.
void Add(linked_list_t* list, int value) {
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    new_node->value = value;
    new_node->previous_node = list->last_node;
    list->last_node = new_node;
    list->len++;
}
//4. Insert: chèn node vào lined list ở vị trí index
//- input :
//    *linked_list_t * địa của đối tượng linked lisst, mà ta sẽ insert đối tượng vào
//    * int value : giá trị của node.
//    * int index : vị trí node được insert vào.
//    - Output : void
//    - Gợi ý : giống như add chúng ta cũng cần cấp phát động, và chúng ta cần update lại previous_node của node trước nó
void Insert(linked_list_t* list, int value, int index) {
    if (index < 0 || index > list->len) {
        printf("Chỉ số không hợp lệ.\n");
        return;
    }

    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    new_node->value = value;

    if (index == 0) {
        new_node->previous_node = NULL;
        if (list->len == 0) {
            list->last_node = new_node;
        }
        else {
            node_t* current = list->last_node;
            new_node->previous_node = current;
            list->last_node = new_node;
        }
    }
    else {
        node_t* current = list->last_node;
        for (int i = 0; i < index - 1; i++) {
            current = current->previous_node;
        }
        new_node->previous_node = current->previous_node;
        current->previous_node = new_node;
    }
    list->len++;
}

//5. Remove: xoá một node ở vị trí cuối cùng trong linked list
//- input : linked_list_t * địa chỉ của đối tượng linked list, mà ta muốn xoá node ở trong nos
//- output : void
//- gợi ý : giải phóng vùng nhớ(sử dụng hàm free) của node cuối cùng.
void Remove(linked_list_t* list) {
    if (list->len == 0) {
        printf("Danh sách rỗng.\n");
        return;
    }

    node_t* to_remove = list->last_node;
    list->last_node = to_remove->previous_node;
    free(to_remove);
    list->len--;
}

//6. RemoveIndex: xoá một node ở vị trí index
//- Input :
//    *linked_list_t * : địa chỉ của linked_líst, mà ta muốn xoá node trong nos
//    * int index : vị trí của node muốn xoá
void RemoveIndex(linked_list_t* list, int index) {
    if (index < 0 || index >= list->len) {
        printf("Chỉ số không hợp lệ.\n");
        return;
    }

    node_t* current = list->last_node;
    if (index == 0) {
        list->last_node = current->previous_node;
    }
    else {
        for (int i = 0; i < index - 1; i++) {
            current = current->previous_node;
        }
        node_t* to_remove = current->previous_node;
        current->previous_node = to_remove->previous_node;
        free(to_remove);
    }
    list->len--;
}

//7. Search: tìm kiếm vị trí của node theo giá trị
//- Input :
//    *linked_list_t * : địa chỉ của linked líst mà chúng ta cần tìm kiếm
//    * int value : giá trị của node mà chúng ta muốn tìm kiếm
//    - Ouput : int : vị trí của node được tìm thấy, -1 nếu không tìm thấy bất kỳ node vào có giá trị value.
int Search(linked_list_t* list, int value) {
    node_t* current = list->last_node;
    int index = 0;
    while (current != NULL) {
        if (current->value == value) {
            return index;
        }
        current = current->previous_node;
        index++;
    }
    return -1; // Không tìm thấy
}

//8. GetValue: lấy giá trị của node ở vị trí cuối cùng
//- Input :
//    *linked_list_t * : địa chỉ của linked list cái mà chúng ta sẽ đi đọc node trong đó.
//    - Ouput : int : giá trị của node
int GetValue(linked_list_t* list) {
    if (list->len == 0) {
        printf("Danh sách rỗng.\n");
        return -1;
    }
    return list->last_node->value;
}

//9. GetValueIndex: lấy giá trị của node ở vị trí index
//- Input :
//    *linked_list_t * : địa của của linked list cái mà chúng ta sẽ đi đọc giá trị của node ở vị trí index
//    * int index : vị trí của node chúng ta muốn đọc
//    - Ouput : int : giá trị của node mà chúng ta đọc được
int GetValueIndex(linked_list_t* list, int index) {
    if (index < 0 || index >= list->len) {
        printf("Chỉ số không hợp lệ.\n");
        return -1;
    }

    node_t* current = list->last_node;
    for (int i = 0; i < index; i++) {
        current = current->previous_node;
    }
    return current->value;
}

//10. DeleteAll: xoá tất cả node trong linked lisst
//- Input : linked_list_t * : địa chỉ của linked list cái mà chúng ta muốn xoá hết tất cả node của nos
//- Output : void
void DeleteAll(linked_list_t* list) {
    while (list->len > 0) {
        Remove(list);
    }
}

int main() {
    linked_list_t list;
    Create(&list);

    Add(&list, 10);
    Add(&list, 20);
    Add(&list, 30);
    Add(&list, 40);

    printf("Độ dài của danh sách: %d\n", GetLen(&list));

    Insert(&list, 25, 2);

    printf("Giá trị tại chỉ số 2: %d\n", GetValueIndex(&list, 2));

    printf("Đang xóa node cuối cùng...\n");
    Remove(&list);
    printf("Độ dài sau khi xóa: %d\n", GetLen(&list));

    int search_result = Search(&list, 25);
    if (search_result != -1) {
        printf("Đã tìm thấy giá trị 25 tại chỉ số: %d\n", search_result);
    }
    else {
        printf("Không tìm thấy giá trị 25.\n");
    }

    DeleteAll(&list);
    printf("Độ dài sau khi xóa tất cả: %d\n", GetLen(&list));

    return 0;
}
