#ifndef COMMAND_H
#define COMMAND_H

#include <objectbase.h>

class Command : public ObjectBase
{
public:
    Command(const QString commandCode_ = "Default Code");
    virtual void execute() const = 0;

protected:
    ~Command();
};

#endif // COMMAND_H
