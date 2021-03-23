template<class T>
class Stack
{
    T data[100];
    T top;

    public:
        Stack(): top(-1) {}
        ~Stack() {}

        void push(const T& item)
        {
            data[++top] = item;
        }

        void pop()
        {
            --top;
        }

        const T& top()
        {
            return data[top];
        }

        bool empty() const{
            return (top == -1);
        }
};