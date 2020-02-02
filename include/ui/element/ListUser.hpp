#ifndef ELEMENT_LISTUSER_HPP
#define ELEMENT_LISTUSER_HPP

#include "Aether.hpp"

namespace CustomElm {
    // A list element storing a user image and name
    class ListUser : public Aether::Element {
        private:
            Aether::Rectangle * topR;
            Aether::Rectangle * bottomR;
            Aether::Text * name;

        public:
            // Pass username and pointer to / size of image
            ListUser(std::string, u8 *, u32);

            // Setter for colours
            void setLineColour(Aether::Colour);
            void setTextColour(Aether::Colour);

            // Adjusting width (when added to list)
            // must adjust line width
            void setW(int);
    };
};

#endif