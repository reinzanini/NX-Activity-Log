#ifndef CONFIG_HPP
#define CONFIG_HPP

#include "SimpleIniParser.hpp"
#include "Types.hpp"

namespace Main {
    // Reads/writes and stores config of application
    class Config {
        private:
            // Ini object to read/write to/from file
            simpleIniParser::Ini * ini;

            bool gGraph_;
            SortType gSort_;
            ThemeType gTheme_;
            bool hDeleted_;

        public:
            // Sets ini to nullptr
            Config();
            // Deletes ini
            ~Config();

            // Reads in config from file (call first otherwise expect crashes!)
            void readConfig();
            // Writes config to file
            void writeConfig();

            // Getters + setters for all settings
            bool gGraph();
            SortType gSort();
            ThemeType gTheme();
            bool hDeleted();

            void setGGraph(bool);
            void setGSort(SortType);
            void setGTheme(ThemeType);
            void setHDeleted(bool);
    };
};

#endif