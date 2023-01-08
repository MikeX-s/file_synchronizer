#include "..//inc/controller.hpp"

Controller::Controller(View *view, Model *model)
    : m_view(view), m_model(model)
{
    m_view->setMainDirectoryPath(m_model->getMainDirectoryPath());
}

void Controller::addDirectory(std::istream &std_input)
{
    m_model->addDirectory(std_input);
}
void Controller::removeDirectory()
{
    m_model->removeDirectory();
}
void Controller::removeFile()
{
    m_model->removeFile();
}
void Controller::printDirectory()
{
    m_view->printDirectory();
}
void Controller::printFiles()
{
    m_view->printDirectory();
}
void Controller::setIntervalTime(std::istream &std_input)
{
    m_model->setIntervalTime(std_input);
}
void Controller::startSync()
{
    m_model->startSync();
}
void Controller::forceSync()
{
    // m_model->forceSync();
}
bool Controller::exit()
{
    return true;
}