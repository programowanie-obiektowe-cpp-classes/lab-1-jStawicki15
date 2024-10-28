class Wektor2D
{
    private:
        double x_;
        double y_;
    public:
        Wektor2D() {x_ = 0; y_ = 0;}

        Wektor2D(double x, double y){x_ = x; y_ = y;}

        friend Wektor2D operator+(Wektor2D& a, Wektor2D& b);
        friend double operator*(Wektor2D& a, Wektor2D& b);
        
        double norm()
        {
            return sqrt(x_*x_+y_*y_);
        }
        void print()
        {
            std::cout<<"Współrzędna X wektora: "<<x_<<"\n"<<"Współrzędna Y wektora: "<<y_<<"\n \n";
        }

        double getX()
        {
            return x_;
        }

        double getY()
        {
            return y_;
        }

        void setX(double x)
        {
            x_ = x;
        }

        void setY(double y)
        {
            y_ = y;
        }
};

double operator*(Wektor2D& a, Wektor2D& b)
{
    return a.x_*b.x_ + a.y_*b.y_;
};

Wektor2D operator+(Wektor2D& a, Wektor2D& b)
{
    Wektor2D tmp(a.x_+b.x_, a.y_+b.y_);
    return tmp;
};