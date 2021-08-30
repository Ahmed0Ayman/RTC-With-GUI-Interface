#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
    void GetRTCRealValues(int* h, int* m, int* s);
    void SetRTCRealValues(void);
protected:
    ModelListener* modelListener;
};

#endif // MODEL_HPP
