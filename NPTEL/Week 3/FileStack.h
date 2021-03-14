class Stack
{
    private:
        int top;
        char *data;
    public:
        Stack(); 
        
        ~Stack();
        
        int empty();

        void push(char x);

        void pop();

        char topdata();
};

Stack::Stack(): data(new char[100]), top(-1) {}
Stack::~Stack(): {delete [] data;}
int Stack::empty() {return (top == -1);}
void Stack::push(char x) {data[++top] = x;}
void Stack::pop() {--top;}
char Stack::top() {return data[top];}