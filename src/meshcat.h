/*
 * Copyright (C) 2018 Fondazione Istituto Italiano di Tecnologia
 *
 * Licensed under either the GNU Lesser General Public License v3.0 :
 * https://www.gnu.org/licenses/lgpl-3.0.html
 * or the GNU Lesser General Public License v2.1 :
 * https://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
 * at your option.
 */

#include <memory>
#include <string>

namespace meshcat
{

/**
 * \brief Viewer window
 */
class ViewerWindow
{
};

/**
 * \brief Viewer window
 */
class Visualizer
{
private:
    std::string m_path;
    std::shared_ptr<ViewerWindow> m_window;

    Visualizer();
    Visualizer(std::shared_ptr<ViewerWindow> window);

    Visualizer(Visualizer& ) = delete;
    operator=(Visualizer& ) = delete;
    Visualizer(Visualizer&& ) = delete;
    operator=(Visualizer&& ) = delete;

};

}
