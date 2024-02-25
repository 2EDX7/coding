class rectangle
{
private:
    double width, length;

public:
    rectangle()

    void set(void)
    {
        width = 0;
        length = 0;
    }
    void set_length(double l)
    {
        length = (l < 0) ? 0 : l;
    }
    void set_width(double w)
    {
        width = (w < 0) ? 0 : w;
    }
    double get_length()
    {
        return length;
    }
    double get_width()
    {
        return width;
    }
    double area(void)
    {
        return width * length;
    }
    double perimeter(void)
    {
        return (width + length) * 2;
    }
    
    ~rectangle()
    {
        cout << "Destructing the object of class rectangle." << endl;
    }
};
