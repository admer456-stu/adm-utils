
#pragma once

namespace adm
{
    // Wrapper for singleton classes
    // Requires a default constructor
    template<typename Class>
    class Singleton final
    {
    public:
        const Class& GetInstance()
        {
            static Class instance;
            return instance;
        }
    };
}
