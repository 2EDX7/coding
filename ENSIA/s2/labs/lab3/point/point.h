#ifndef point_h
#define point_h

class point{
    private:
        float X,Y;
    public:
        point(float, float );
        float distance(const point&);
        void translate(float, float);
        void setX(float);
        void setY(float);
        float getX() const;
        float getY() const;
};

#endif
