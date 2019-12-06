#ifndef SCREEN_RECENTACTIVITY_HPP
#define SCREEN_RECENTACTIVITY_HPP

#include "screen.hpp"
#include "selection.hpp"
#include "User.hpp"
#include <vector>

namespace Screen {
    class RecentActivity : public UI::Screen {
        private:
            // Selection object
            UI::Selection * selection;
            // Top right time texture
            SDL_Texture * total_hours;
            // Used to print/render user name and image
            User * user;

        // See ui/screen.hpp for what these functions do
        public:
            // Additionally takes a user object
            RecentActivity(User *);

            void event();
            void update(uint32_t dt);
            void draw();

            ~RecentActivity();
    };
}

#endif