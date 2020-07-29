/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef ICONCONTAINERBASE_HPP
#define ICONCONTAINERBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/TextureMapper.hpp>

class iconContainerBase : public touchgfx::Container
{
public:
    iconContainerBase();
    virtual ~iconContainerBase() {}
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::TextureMapper iconCenter;
    touchgfx::TextureMapper iconSides;

private:

};

#endif // ICONCONTAINERBASE_HPP