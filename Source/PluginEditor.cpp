/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
SimpleDelayAudioProcessorEditor::SimpleDelayAudioProcessorEditor (SimpleDelayAudioProcessor& p, AudioProcessorValueTreeState& vts)
    : AudioProcessorEditor (&p), processor (p), valueStateTree (vts)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (600, 400);
    
    //Delay Dial
    numDelayDial.setSliderStyle(Slider::RotaryVerticalDrag);
    numDelayDial.setRange(20, 1000, 1);
    numDelayDial.setValue(500.0);
    numDelayDial.setNumDecimalPlacesToDisplay(1);
    numDelayDial.setTextBoxStyle(Slider::TextBoxBelow, false, 100, 50);
    numDelayDial.setTextValueSuffix(" ms");
    addAndMakeVisible(numDelayDial);
    
    //Delay Label
    /*addAndMakeVisible(numDelayLabel);
    numDelayLabel.setText("Cutoff", dontSendNotification);
    numDelayLabel.setJustificationType(Justification::centred);*/
    numDelayValue = new AudioProcessorValueTreeState::SliderAttachment(valueStateTree, "delayValue", numDelayDial);
    
    //Feedback Dial
    feedbackDial.setSliderStyle(Slider::RotaryVerticalDrag);
    feedbackDial.setRange(0.1, 0.8, 0.1);
    feedbackDial.setValue(0.6);
    feedbackDial.setNumDecimalPlacesToDisplay(1);
    feedbackDial.setTextBoxStyle(Slider::TextBoxBelow, false, 100, 50);
<<<<<<< HEAD
    feedbackDial.setTextValueSuffix(" Feedback Amount");
    addAndMakeVisible(feedbackDial);
    
    //Feedback Label
    /*addAndMakeVisible(numDelayLabel);
    feedbackLabel.setText("Cutoff", dontSendNotification);
    feedbackLabel.setJustificationType(Justification::centred);*/
    feedbackValue = new AudioProcessorValueTreeState::SliderAttachment(valueStateTree, "feedbackValue", feedbackDial);
    
    addAndMakeVisible(dryWetSlider);
    dryWetSlider.setSliderStyle(Slider::RotaryVerticalDrag);
    dryWetSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 100, 20);
    dryWetSlider.setRange(0, 1, 0.01);
    dryWetAttachment = new AudioProcessorValueTreeState::SliderAttachment(valueStateTree, "dryWet", dryWetSlider);
    
    addAndMakeVisible(dampingSlider);
    dampingSlider.setSliderStyle(Slider::RotaryVerticalDrag);
    dampingSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 100, 20);
    dampingSlider.setRange(0, 1, 0.01);
    dampingAttachment = new AudioProcessorValueTreeState::SliderAttachment(valueStateTree, "damping", dampingSlider);
    
    addAndMakeVisible(roomSizeSlider);
    roomSizeSlider.setSliderStyle(Slider::RotaryVerticalDrag);
    roomSizeSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 100, 20);
    roomSizeSlider.setRange(0, 1, 0.01);
    roomSizeAttachment = new AudioProcessorValueTreeState::SliderAttachment(valueStateTree, "roomSize", roomSizeSlider);
    
    addAndMakeVisible(roomWidthSlider);
    roomWidthSlider.setSliderStyle(Slider::RotaryVerticalDrag);
    roomWidthSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 100, 20);
    roomWidthSlider.setRange(0, 1, 0.01);
    roomWidthAttachment = new AudioProcessorValueTreeState::SliderAttachment(valueStateTree, "roomWidth", roomWidthSlider);
=======
    feedbackDial.setTextValueSuffix(" Gain");
    addAndMakeVisible(feedbackDial);
    
    //Feedback Label
    addAndMakeVisible(numDelayLabel);
    feedbackLabel.setText("Cutoff", dontSendNotification);
    feedbackLabel.setJustificationType(Justification::centred);
    feedbackValue = new AudioProcessorValueTreeState::SliderAttachment(valueStateTree, "feedbackValue", feedbackDial);
>>>>>>> origin/master
    
}

SimpleDelayAudioProcessorEditor::~SimpleDelayAudioProcessorEditor()
{
}

//==============================================================================
void SimpleDelayAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Variable Delay Line Stereo Reverb", getLocalBounds(), Justification::centred, 1);
}

void SimpleDelayAudioProcessorEditor::resized()
{
    const int labelWidth = getWidth() / 6;
    const int labelHeight = 25;
    const int sliderWidth = getWidth() / 6;
    const int sliderHeight = getHeight() - labelHeight;
    
    
    numDelayDial.setBounds(0, 0, sliderWidth, sliderHeight);
<<<<<<< HEAD
    feedbackDial.setBounds(sliderWidth, 0, sliderWidth, sliderHeight);
    dryWetSlider.setBounds(sliderWidth * 2, 0, sliderWidth, sliderHeight);
    roomSizeSlider.setBounds(sliderWidth * 3, 0, sliderWidth, sliderHeight);
    dampingSlider.setBounds(sliderWidth * 4, 0, sliderWidth, sliderHeight);
    roomWidthSlider.setBounds(sliderWidth * 5, 0, sliderWidth, sliderHeight);
=======
    feedbackDial.setBounds(sliderWidth, 0, sliderWidth, sliderHeight);
>>>>>>> origin/master
}
