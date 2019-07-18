#pragma once

#define EXPORT __attribute__((visibility("default")))
#define HIDDEN __attribute__((visibility("hidden")))

#ifdef FORCE_PRIVATE_HIDDEN
#define MAYBE_HIDDEN HIDDEN
#else
#define MAYBE_HIDDEN
#endif

class MAYBE_HIDDEN MyClassPrivate
{
public:
    int getPrivateNumber() const;
};

class EXPORT MyClass
{
public:
    int getNumber() const;
};
